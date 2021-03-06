/*-------------------------------------------------------------------------
  interrupt_iface.c - Interruptions interface

             (c) 2006 Pierre Gaufillet <pierre.gaufillet@magic.fr> 

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
-------------------------------------------------------------------------*/

/* $Id: interrupt_iface.c,v 1.1 2006/04/17 20:36:15 gaufille Exp $ */


/* TODO Interrupt entry points should be defines in config.h */

/* Interrupt vectors */
#pragma code high_priority_isr 0x2020
void high_priority_isr(void) __interrupt 1
{
}

#pragma code low_priority_isr 0x4000
void low_priority_isr(void) __interrupt 2
{
}

