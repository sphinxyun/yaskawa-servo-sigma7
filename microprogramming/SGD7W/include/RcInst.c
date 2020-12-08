/****************************************************************************************************/
/*																									*/
/*																									*/
/*		RcInst.c : RcxxInst Functions for Debug Micro Program										*/
/*																									*/
/*																									*/
/****************************************************************************************************/
/*																									*/
/*																									*/
/*		1. Work Register Definition																	*/
/*																									*/
/*		2. The Functions for Micro Program Instruction												*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/*																									*/
/************** Copyright Yaskawa Electric Corporation **********************************************/
/*																									*/
/*		Rev.1.00 : 2007.03.11	T.Taniguchi		(�쐬��)											*/
/*																									*/
/*																									*/
/****************************************************************************************************/



/****************************************************************************************************/
/*		Work Register Definition for RcxxInst Functions												*/
/****************************************************************************************************/
RCREG	RcReg;									/* Work Register for RcxxInst						*/
/*--------------------------------------------------------------------------------------------------*/





/****************************************************************************************************/
/*																									*/
/*		Rc11																						*/
/*																									*/
/****************************************************************************************************/
void	Rc11A( LONG SrcA, LONG SrcB )
{
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc11B( UCHAR OP1 )
{
		RcReg.OP1 = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc11C( LONG *DstX )
{
		RcReg.DstX = DstX;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc11D( UCHAR Enb1 )
{
		RcReg.Enb1 = Enb1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc13																						*/
/*																									*/
/****************************************************************************************************/
void	Rc13A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc13B( UCHAR OP1 )
{
		RcReg.OP1 = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc13C( LONG *DstX, UCHAR Mul1 )
{
		RcReg.DstX = DstX;
		RcReg.Mul1 = Mul1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc13D( UCHAR Enb1, UCHAR Sft1 )
{
		RcReg.Enb1 = Enb1;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc14																						*/
/*																									*/
/****************************************************************************************************/
void	Rc14A( void )
{
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc14B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc14C( LONG *DstX, UCHAR Mul2 )
{
		RcReg.DstX = DstX;
		RcReg.Mul2 = Mul2;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc14D( UCHAR Enb2, UCHAR Sft2 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Sft2 = Sft2;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc15																						*/
/*																									*/
/****************************************************************************************************/
void	Rc15A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc15B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc15C( LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1 )
{
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc15D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc16																						*/
/*																									*/
/****************************************************************************************************/
void	Rc16A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc16B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc16C( LONG SrcG, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc16D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc21																						*/
/*																									*/
/****************************************************************************************************/
void	Rc21A( LONG SrcA, LONG SrcB )
{
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc21B( LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc21C( LONG *DstY, LONG *DstX )
{
		RcReg.DstY = DstY;
		RcReg.DstX = DstX;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc21D( UCHAR Enb2, UCHAR Enb1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc23																						*/
/*																									*/
/****************************************************************************************************/
void	Rc23A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc23B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc23C( LONG *DstY, LONG *DstX, UCHAR Mul2, UCHAR Mul1 )
{
		RcReg.DstY = DstY;
		RcReg.DstX = DstX;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc23D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2,  UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc31																						*/
/*																									*/
/****************************************************************************************************/
void	Rc31A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc31B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc31C( LONG SrcG, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc31D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc32																						*/
/*																									*/
/****************************************************************************************************/
void	Rc32A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc32B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc32C( LONG SrcG, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc32D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc33																						*/
/*																									*/
/****************************************************************************************************/
void	Rc33A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc33B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc33C( LONG SrcG, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc33D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc34																						*/
/*																									*/
/****************************************************************************************************/
void	Rc34A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc34B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc34C( LONG SrcG, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc34D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}



/****************************************************************************************************/
/*																									*/
/*		Rc35																						*/
/*																									*/
/****************************************************************************************************/
void	Rc35A( LONG SrcC, LONG SrcA, LONG SrcB )
{
		RcReg.SrcC = SrcC;
		RcReg.SrcA = SrcA;
		RcReg.SrcB = SrcB;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc35B( LONG SrcF, LONG SrcD, LONG SrcE, UCHAR OP2, UCHAR OP1 )
{
		RcReg.SrcF = SrcF;
		RcReg.SrcD = SrcD;
		RcReg.SrcE = SrcE;
		RcReg.OP2  = OP2;
		RcReg.OP1  = OP1;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc35C( LONG SrcG, LONG *DstY, LONG *DstX, UCHAR Add1, UCHAR Mul2, UCHAR Mul1, UCHAR OP3 )
{
		RcReg.SrcG = SrcG;
		RcReg.DstY = DstY;
		RcReg.DstX = DstX;
		RcReg.Add1 = Add1;
		RcReg.Mul2 = Mul2;
		RcReg.Mul1 = Mul1;
		RcReg.OP3  = OP3;
		return;
}
/*--------------------------------------------------------------------------------------------------*/
void	Rc35D( UCHAR Enb2, UCHAR Enb1, UCHAR Sft2, UCHAR Sft1 )
{
		RcReg.Enb2 = Enb2;
		RcReg.Enb1 = Enb1;
		RcReg.Sft2 = Sft2;
		RcReg.Sft1 = Sft1;
/*--------------------------------------------------------------------------------------------------*/
/*		Calculate RcXX Instruction																	*/
/*--------------------------------------------------------------------------------------------------*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
		;;;		/* Add Later	*/
/*--------------------------------------------------------------------------------------------------*/
		return;
}







/******************************************* end of file ********************************************/
