#pragma once
#include <iostream>
#include "manager.h"

class UiConsole {
  public:
   static const char* RESET ;
   static const char* ROJO ;
   static const char* VERDE;
   static const char* AZUL;
   static const char* AMARILLO;
   static const char* BOLD;
   static const char* SUBRAYADO;

   UiConsole();
   void setUsuario(std::string usuario);
   int mostrarMenuPrincipal();
   int mostrarMenuInsumos();
   int mostrarMenuProductos();
   int mostrarMenuProveedores();
   int mostrarMenuClientes();
   int mostrarMenuProduccion();
   int mostrarMenuVentas();
   int mostrarMenuUsuarios();
   int mostrarMenuEstadisticas();
   int mostrarMenuSeguridad();
   void mostrarMenuLogin(std::string& user, std::string& pass, int intentos);
   void configurarConsola();
   void limpiarConsola();
   void opcionIncorrecta();
   void pausa();

   //funcionalidades del menu usuarios
   Usuario agregarUsuario(std::string nombreUsuario, Manager& manager);
   int mostrarMenuModificacionUsuario();   
   void eliminarUsuario();
   void contraseniaRoot();
   void roles();
   void bloquearDesbloquear();
   void mostrarUsuarios();
   void mostrarRoles();
   void mostrarRoles(std::string& nombreUsuario);
   void listarUsuario(std::string nombreUsuario,char tipoUsuario, std::string email, int telefono);

  private:
   std::string _nombreUsuario;
};