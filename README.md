# Calculadora de Armaduras para Vigas de Hormigón Armado 🏗️
<img width="1294" height="904" alt="image" src="https://github.com/user-attachments/assets/f4f3c5ca-9be0-4292-8614-3a89183331cd" />

Esta es una aplicación de escritorio técnica diseñada para asistir en el dimensionamiento de secciones de hormigón armado. El software permite calcular el área de acero necesaria (armadura longitudinal y transversal) basándose en los esfuerzos solicitantes y las propiedades de los materiales.

## 🚀 Características

* **Cálculo de Flexión:** Determinación de armadura longitudinal según el momento flector de diseño.
* **Cálculo de Corte:** Dimensionamiento de estribos y separación necesaria.
* **Verificaciones Normativas:** Control de cuantías mínimas y máximas de acero.
* **Interfaz Nativa:** GUI fluida y multiplataforma gracias al uso de bibliotecas nativas.

## 🛠️ Tecnologías y Herramientas

* **Lenguaje:** C++ (Estándar moderno).
* **Entorno de Desarrollo (IDE):** [ZinjaI](http://zinjai.sourceforge.net/).
* **Framework GUI:** wxWidgets.
* **Diseño de Interfaz:** wxFormBuilder (integrado con el flujo de trabajo de ZinjaI).
* **Paradigma:** Programación Orientada a Objetos (POO).

## ⚙️ Arquitectura del Software

El proyecto aplica conceptos de POO para garantizar la mantenibilidad:
* **Clases de Dominio:** Objetos como `Viga`, `Material` y `Seccion` que encapsulan las propiedades físicas.
* **Lógica de Cálculo:** Métodos especializados para procesar las fórmulas de ingeniería.
* **Gestión de Interfaz:** Separación de la lógica de eventos de la GUI del motor de cálculo.

## 🔧 Ejecución en ZinjaI

Para abrir y compilar este proyecto en ZinjaI, siga estos pasos:

1. **Abrir el proyecto:** Inicie ZinjaI y abra el archivo de proyecto `.zpr` incluido en la raíz.
2. **Configuración de wxWidgets:** Asegúrese de tener instalado el complemento de wxWidgets para ZinjaI (disponible en el menú de Ayuda -> Instalar Complementos).
3. **Compilación:** Presione `F9` para compilar y ejecutar el proyecto. El IDE gestionará automáticamente los flags de compilación y el enlazado de las librerías.

## 📁 Estructura del Proyecto

* `/src`: Archivos de implementación (.cpp).
* `/include`: Definiciones de clases y cabeceras (.h).
* `proyecto.zpr`: Archivo de proyecto de ZinjaI.
* `gui.fbp`: Proyecto de wxFormBuilder para el diseño visual de las ventanas.

---
**Desarrollado por:** Kevin Larguia  
**Carrera:** Ingeniería Informática
