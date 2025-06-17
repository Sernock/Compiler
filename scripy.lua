-- RPG бой на Lua

-- Игрок
local player = {
    name = "Герой",
    hp = 100,
    maxHp = 100,
    attackMin = 10,
    attackMax = 20,
    healAmount = 15
}

-- Монстр
local monster = {
    name = "Монстр",
    hp = 80,
    maxHp = 80,
    attackMin = 8,
    attackMax = 18
}

-- Функция атаки
local function attack(attacker, defender)
    local damage = math.random(attacker.attackMin, attacker.attackMax)
    defender.hp = math.max(defender.hp - damage, 0)
    print(attacker.name .. " наносит " .. damage .. " урона " .. defender.name)
end

-- Функция лечения
local function heal(character)
    character.hp = math.min(character.hp + character.healAmount, character.maxHp)
    print(character.name .. " восстанавливает " .. character.healAmount .. " здоровья")
end

-- Проверка жив ли персонаж
local function isAlive(character)
    return character.hp > 0
end

-- Игровой цикл
math.randomseed(os.time())

print("Начинается битва!")
while isAlive(player) and isAlive(monster) do
    print("\nТвой ход! Выбери действие:")
    print("1. Атаковать")
    print("2. Лечиться")
    io.write("> ")
    local choice = io.read()

    if choice == "1" then
        attack(player, monster)
    elseif choice == "2" then
        heal(player)
    else
        print("Некорректный ввод, пропускаешь ход!")
    end

    if not isAlive(monster) then
        print("\nМонстр повержен! Ты победил!")
        break
    end

    -- Ход монстра
    print("\nХод монстра...")
    attack(monster, player)

    if not isAlive(player) then
        print("\nТы пал в бою. Игра окончена.")
    else
        print("Твоё здоровье: " .. player.hp .. "/" .. player.maxHp)
        print("Здоровье монстра: " .. monster.hp .. "/" .. monster.maxHp)
    end
end
