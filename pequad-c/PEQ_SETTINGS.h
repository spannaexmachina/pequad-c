/************************************************************************************
 * Copyright (C) 2017  Michael Holmes et al.   <peqclib@gmail.com>                  *
 *                                                                                  *
 * This file is part of PEQUOD-C.                                                   *
 *                                                                                  *
 *      Redistribution and use in source and binary forms, with or                  *
 *      without modification, are permitted provided that the                       *
 *      following conditions are met:                                               *
 *                                                                                  *
 *          * Redistributions of source code must retain the above                  *
 *            copyright notice, this list of conditions and the                     *
 *            following disclaimer.                                                 *
 *                                                                                  *
 *          * Redistributions in binary form must reproduce the                     *
 *            above copyright notice, this list of conditions and                   *
 *            the following disclaimer in the documentation and/or                  *
 *            other materials provided with the distribution.                       *
 *                                                                                  *
 *          * Neither the name of PEQUOD-C, PEQ-C, PEQ, nor the                     *
 *            names of its contributors may be used to endorse or                   *
 *            promote products derived from this software without                   *
 *            specific prior written permission.                                    *
 *                                                                                  *
 *      THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS         *
 *      “AS IS” AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT           *
 *      LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS           *
 *      FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE              *
 *      COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,         *
 *      INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,        *
 *      BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;            *
 *      LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER            *
 *      CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT          *
 *      LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY       *
 *      WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY     *
 *      OF SUCH DAMAGE.                                                             *
 *                                                                                  *
 *      * PEQUOD-C utilises the SDL framework                                       *
 *        ( https://www.libsdl.org )                                                *
 *                                                                                  *
 *      * PEQUOD-C contact:                                                         *
 *          <peqclib@gmail.com>                                                     *
 *         ( https://github.com/spannaexmachina/pequad-c )                          *
 *                                                                                  *
 ************************************************************************************/


#ifndef PEQ_SETTINGS_h
#define PEQ_SETTINGS_h

#define WINDOW_X           100
#define WINDOW_Y           100
#define WINDOW_WIDTH       640
#define WINDOW_HEIGHT      480
#define WINDOW_TITLE       "Pequod-C"
#define BACKGROUND_COLOUR  BLACK
#define WINDOW_MODE        WINDOW
#define FPS_DEF            60
#define DELAY_TIME_DEF     1000.0f / FPS_DEF
#define MAX_TEXTURE        100

#endif /* PEQ_SETTINGS_h */
