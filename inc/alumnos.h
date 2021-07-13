/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

//! Estructura de datos con información sobre los alumnos
typedef struct alumno_s {
    char apellidos[30];     //!< Apellido del alumno
    char nombres[30];       //!< Nombres del alumno
    char documento[11];     //!< DNI del alumno
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
* @brief Serializa los datos de los alumnos a JSON
*
* Esta función recibe un puntero a una estrutura y la serializa
*
* @param[out]   cadena  Cadena de caracteres a serializar
* @param[in]    espacio Tamaño de la cadena de caracteres
* @param[in]    alumno  Estructura con los datos del alumno
* @return               true    => Serialización correcta
*                       false   => Serialización INCORRECTA
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
* @brief Serializa los datos de los alumnos a JSON
*
* Esta función recibe un puntero a una estrutura y la serializa
*
* @param[out]   cadena  Cadena de caracteres a serializar
* @param[in]    espacio Tamaño de la cadena de caracteres
* @return               true    => Serialización correcta
*                       false   => Serialización INCORRECTA
*/
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
