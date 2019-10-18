//
// File: task.h
// Project: Vispurple
// Description : Vispurple is an open source cross-platform desktop simulator to evaluate
// the visual accessibility of any graphic element for any visual perception condition
// Author: Jesús Fermín Villar Ramírez (pokoidev)

// © Copyright (C) 2019  pokoidev

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#ifndef TASK_H
#define TASK_H


class Task
{
public:

    /**
     * @brief Creates a new task with a null function pointer
     */
    Task() { f = nullptr;}
    /**
     * @brief Creates a new task with a function pointer to the
     * given void function
     * @param The void function to pointed
     */
    Task(void foo()) : f{foo}{}
    ~Task() = default;

    /**
     * @brief Execute the function pointed
     */
    void Execute() { f(); }

    /**
     * The function pointer of this
     */
    void (*f)();

};

#endif // TASK_H