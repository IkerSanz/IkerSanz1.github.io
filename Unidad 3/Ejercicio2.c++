Sub Main()
    Dim opcion As Integer
    opcion = 0
    Do While opcion < 3
        Console.WriteLine("Sistema de v entas")
        Console.WriteLine("[1] Aparatos sanitarios")
        Console.WriteLine("[2] Materiales de construccion")
        Console.WriteLine("[3] Terminar")
        Console.WriteLine("Elija la opcion de la ferrteria")
        opcion = Console.ReadLine()
        Select Case opcion
            Case Is = 1
                Dim pagar As Decimal
                Dim vta As Decimal
                Dim ttarifa As Integer
                Dim vtarifa As Decimal
                Console.WriteLine("Aparatos sanitarios")
                Console.WriteLine("[1] Ëquipos italianos")
                Console.WriteLine("[2] Equipos bresileños")
                Console.WriteLine("[3] Equipos americanos")
                Console.WriteLine("Elegir las clases de equipos sanitarios")
                ttarifa = Console.ReadLine()
                Console.WriteLine("Que Cantidad desea comprar")
                vta = Console.ReadLine()
                Select Case ttarifa
                    Case Is = 1
                        vtarifa = 150
                        pagar = vta * vtarifa
                    Case Is = 2
                        vtarifa = 130
                        pagar = vta * vtarifa
                    Case Is = 3
                        vtarifa = 200
                        pagar = vta * vtarifa
                End Select
                Console.WriteLine("Se pagara:" + Str(pagar))
                Console.ReadLine()

            Case Is = 2
                Dim pagar As Decimal
                Dim vtm As Decimal
                Dim ttarifa As Decimal
                Dim vtarifa As Decimal
                Console.WriteLine("Materiales de construccion")
                Console.WriteLine("[1] Ladrillos")
                Console.WriteLine("[1] Cemento")
                Console.WriteLine("[1] Bolsa de arena")
                Console.WriteLine("[1] Agregados")
                Console.WriteLine("[1] Madera")
                Console.WriteLine("Elegir que material de cosntruccion desea comprar")
                ttarifa = Console.ReadLine()
                Console.WriteLine("Que cantidad desea comprar")
                vtm = Console.ReadLine()
                Select Case ttarifa
                    Case Is = 1
                        vtarifa = 150
                        pagar = vtm * vtarifa
                    Case Is = 2
                        vtarifa = 17
                        pagar = vtm * vtarifa

                    Case Is = 3
                        vtarifa = 15
                        pagar = vtm * vtarifa

                    Case Is = 4
                        vtarifa = 25
                        pagar = vtm * vtarifa

                    Case Is = 5
                        vtarifa = 3
                        pagar = vtm * vtarifa
                End Select
                Console.WriteLine("Se pagara:" + Str(pagar))
                Console.ReadLine()
        End Select
    Loop
End Sub