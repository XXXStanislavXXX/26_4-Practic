# AudioPlayer Simulation

Имитация работы аудиоплеера на C++.  
В проекте реализованы два класса: `Track` (аудиозапись) и `AudioPlayer` (плеер).

## Структура проекта

- `include/Track.h` — описание класса Track
- `include/AudioPlayer.h` — описание класса AudioPlayer
- `src/Track.cpp` — реализация Track
- `src/AudioPlayer.cpp` — реализация AudioPlayer
- `main.cpp` — точка входа

## Запуск

1. Соберите проект с помощью CMake или вашей IDE.
2. Запустите исполняемый файл.
3. Используйте команды: `play`, `pause`, `next`, `stop`, `exit`, `status`, `resume`.

## Список треков находится в памяти плеера. В std::vector<Track> tracks

1. Song1
2. Song2
3. Song3

## Пример команд

Enter command (play, pause, next, stop, exit): play Enter track name: Song1

## Требования

- C++17 и выше