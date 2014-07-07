// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#include "pch.h"
#include "MOAIBtVector3.h"


//================================================================//
// lua
//================================================================//

//----------------------------------------------------------------//
/**	@name	classHello
	@text	Class (a.k.a. static) method. Prints the string 'MOAIBtVector3 class foo!' to the console.

	@out	nil
*/
/*
int MOAIBtVector3::_newInstance ( lua_State* L ) {
	UNUSED ( L );
	
	printf ( "MOAIBtVector3 class foo!\n" );
	
	return 0;
}
*/

/* just in case is needed  
	#ifdef BT_USE_DOUBLE_PRECISION
		double result = vectorLength(double);
	#else
		float  result = vectorLength;
	#endif //BT_USE_DOUBLE_PRECISION	
*/	

//----------------------------------------------------------------//
/**	@name	length
	@text	Obtains MOAIBtVector3 vector lenght value
	@in		MOAIBtVector3 self

	@out		Length ot the MOAIBtVector3 vector
*/

int MOAIBtVector3::_length ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments
	btScalar vectorLength = self->mBtVector3->length();
	lua_pushnumber( state , vectorLength);
	
	return 1;
}

//----------------------------------------------------------------//
/**	@name	norm
	@text	Obtains MOAIBtVector3 vector norm value
	@in		MOAIBtVector3 self

	@out		Norm ot the MOAIBtVector3 vector
*/

int MOAIBtVector3::_norm ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments
	btScalar vectorNorm = self->mBtVector3->norm();
	lua_pushnumber( state , vectorNorm);
	
	return 1;
}

//----------------------------------------------------------------//
/**	@name	getX
	@text	Obtains MOAIBtVector3 vector X Coordinate
	@in		MOAIBtVector3 self

	@out		X coordinate value
*/

int MOAIBtVector3::_getX ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments
	btScalar x = self->mBtVector3->getX();
	lua_pushnumber( state , x);
	
	return 1;
}

//----------------------------------------------------------------//
/**	@name	getY
	@text	Obtains MOAIBtVector3 vector Y Coordinate
	@in		MOAIBtVector3 self

	@out		Y coordinate value
*/

int MOAIBtVector3::_getY ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments
	btScalar y = self->mBtVector3->getY();
	lua_pushnumber( state , y);
	
	return 1;
}

//----------------------------------------------------------------//
/**	@name	getZ
	@text	Obtains MOAIBtVector3 vector Z Coordinate
	@in		MOAIBtVector3 self

	@out		Z coordinate value
*/

int MOAIBtVector3::_getZ ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments
	btScalar z = self->mBtVector3->getZ();
	lua_pushnumber( state , z);
	
	return 1;
}

//================================================================//
// MOAIBtVector3
//================================================================//

//----------------------------------------------------------------//
MOAIBtVector3::MOAIBtVector3 () //: mBtVector3(0)
 {
	
	RTTI_BEGIN
		RTTI_EXTEND ( MOAILuaObject )
	RTTI_END
	
	this->mBtVector3 = new btVector3;
	
}

//----------------------------------------------------------------//
/**	@name	setValue
	@text	Sets a MOAIBtVector3 vector to a new value
	@in		MOAIBtVector3 self
	@in		X Coordinate value
	@in		Y Coordinate value
	@in		Z Coordinate value

	@out		nil
*/

int MOAIBtVector3::_setValue ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "UNNN" ) // this macro initializes the 'self' variable and type checks arguments

	btScalar x  = state.GetValue < btScalar >( 2, 0.0f );
	btScalar y	= state.GetValue < btScalar >( 3, 0.0f );
	btScalar z	= state.GetValue < btScalar >( 4, 0.0f );	
	
	self->mBtVector3->setValue( x, y, z );
	
	return 0;
	
}

//----------------------------------------------------------------//
/**	@name	setX
	@text	Sets MOAIBtVector3 vector X coordinate
	@in		MOAIBtVector3 self
	@in		X Coordinate value

	@out		nil
*/

int MOAIBtVector3::_setX ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "UN" ) // this macro initializes the 'self' variable and type checks arguments

	btScalar x  = state.GetValue < btScalar >( 2, 0.0f );
	self->mBtVector3->setX( x );
	
	return 0;	
}

//----------------------------------------------------------------//
/**	@name	setY
	@text	Sets MOAIBtVector3 vector Y coordinate
	@in		MOAIBtVector3 self
	@in		Y Coordinate value

	@out		nil
*/

int MOAIBtVector3::_setY ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "UN" ) // this macro initializes the 'self' variable and type checks arguments

	btScalar y  = state.GetValue < btScalar >( 2, 0.0f );
	self->mBtVector3->setY( y );
	
	return 0;	
}

//----------------------------------------------------------------//
/**	@name	setZ
	@text	Sets MOAIBtVector3 vector Z coordinate
	@in		MOAIBtVector3 self
	@in		Z Coordinate value

	@out		nil
*/

int MOAIBtVector3::_setZ ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "UN" ) // this macro initializes the 'self' variable and type checks arguments

	btScalar z  = state.GetValue < btScalar >( 2, 0.0f );
	self->mBtVector3->setZ( z );
	
	return 0;	
}

//----------------------------------------------------------------//
/**	@name	normalize
	@text	Normalizes current MOAIBtVector3 vector 
	@in		MOAIBtVector3 self

	@out		nil
*/

int MOAIBtVector3::_normalize ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments

	self->mBtVector3->normalize();
	
	return 0;	
}
//----------------------------------------------------------------//
/**	@name	normalize
	@text	Return a normalizes version of current MOAIBtVector3 vector
	@in		MOAIBtVector3 self

	@out		MOAIBtVector3
*/

int MOAIBtVector3::_normalized ( lua_State* L ) {
	MOAI_LUA_SETUP ( MOAIBtVector3, "U" ) // this macro initializes the 'self' variable and type checks arguments

	MOAIBtVector3* mNormalizedVector = new MOAIBtVector3();
	btVector3 btNormalizedVector = self->mBtVector3->normalized();
	
	lua_pushnumber( state , btNormalizedVector.getZ());
	lua_pushnumber( state , btNormalizedVector.getY());
	lua_pushnumber( state , btNormalizedVector.getX());
	mNormalizedVector->PushLuaUserdata(state);
	mNormalizedVector->_setValue(state);
	self->PushLuaUserdata(state);
	
	return 1;	
}


//----------------------------------------------------------------//
void MOAIBtVector3::RegisterLuaClass ( MOAILuaState& state ) {

	// call any initializers for base classes here:
	// MOAIBtVector3Base::RegisterLuaClass ( state );

	// also register constants:
	// state.SetField ( -1, "FOO_CONST", ( u32 )FOO_CONST );

	// here are the class methods:
	luaL_Reg regTable [] = {
//		{ "newInstance",		_newInstance },
		{ NULL, NULL }
	};

	luaL_register ( state, 0, regTable );
}

//----------------------------------------------------------------//
void MOAIBtVector3::RegisterLuaFuncs ( MOAILuaState& state ) {

	// call any initializers for base classes here:
	// MOAIBtVector3Base::RegisterLuaFuncs ( state );

	// here are the instance methods:
	luaL_Reg regTable [] = {
		{ "length"		,_length },
		{ "norm"		,_norm },
		{ "normalize"	,_normalize },
		{ "normalized"	,_normalized },
		{ "setValue"	, _setValue },
		{ "getX"		, _getX },
		{ "getY"		, _getY },
		{ "getZ"		, _getZ },
		{ "setX"		, _setX },
		{ "setY"		, _setY },
		{ "setZ"		, _setZ },
		{ NULL, NULL }
	};

	luaL_register ( state, 0, regTable );
}

void MOAIBtVector3::Destroy () {

	if ( this->mBtVector3 ) {
		delete this->mBtVector3;
	}

}

//----------------------------------------------------------------//
MOAIBtVector3::~MOAIBtVector3 () {

	this->Destroy ();
}
