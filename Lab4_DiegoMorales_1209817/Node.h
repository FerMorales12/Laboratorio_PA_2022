#pragma once
/// <summary>
	/// Nodo simplemente enlazado
	/// </summary>
ref class Node
{
public:
	
		/// <summary>
		/// Información a almacenar
		/// </summary>
		int data;

		/// <summary>
		/// Apuntador hacia siguiente Nodo
		/// </summary>
		Node^ next;
		
private:
	/// <summary>
	/// Apuntador al primer Nodo dentro de la lista (cabeza)
	/// </summary>
	Node^ header = nullptr;
};

