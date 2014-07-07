
-- test case
local TestMOAIBtVector3 = {}
_G.TestMOAIBtVector3 = TestMOAIBtVector3

---
-- setUp
function TestMOAIBtVector3:setUp()
    self.nullVector = MOAIBtVector3.new()
	self.unityVector = MOAIBtVector3.new()
	self.unityVector:setValue(1,0,0)
	self.vector = MOAIBtVector3.new()
	self.vector:setValue(15,5,10)
end

---
-- tearDown
function TestMOAIBtVector3:tearDown()
    self.nullVector = nil
	self.unityVector = nil
	self.vector = nil
end

--testNew
function TestMOAIBtVector3:testNew()
	assertNotIs( self.nullVector , nil)
	assertEquals(type(self.nullVector),"userdata")
	assertEquals(self.nullVector:getClassName(),"MOAIBtVector3")
end

function TestMOAIBtVector3:testNewUnity()
	assertNotIs( self.nullVector , nil)
	assertEquals(type(self.unityVector),"userdata")
	assertEquals(self.unityVector:getClassName(),"MOAIBtVector3")
end

function TestMOAIBtVector3:testLengthNullVector()
	assertEquals( self.nullVector:length() , 0.0)
end

function TestMOAIBtVector3:testLength2Vector()
	assertEquals( self.vector:length2() , 350.0)
end

function TestMOAIBtVector3:testNormNullVector()
	assertEquals( self.nullVector:norm() , 0.0)
end

function TestMOAIBtVector3:testLengthUnityVector()
	assertEquals( self.unityVector:length() , 1.0)
end

function TestMOAIBtVector3:testNormUnityVector()
	assertEquals( self.unityVector:norm() , 1.0)
end

function TestMOAIBtVector3:testVectorGetX()
	assertEquals( self.vector:getX() , 15.0)
end

function TestMOAIBtVector3:testVectorGetY()
	assertEquals( self.vector:getY() , 5.0)
end

function TestMOAIBtVector3:testVectorGetZ()
	assertEquals( self.vector:getZ() , 10.0)
end

function TestMOAIBtVector3:testVectorSetX()
	local vector = self.vector
	vector:setX(100)
	assertEquals( vector:getX() , 100.0)
end

function TestMOAIBtVector3:testVectorSetY()
	local vector = self.vector
	vector:setY(160)
	assertEquals( vector:getY() , 160.0)
end

function TestMOAIBtVector3:testVectorSetZ()
	local vector = self.vector
	vector:setZ(300)
	assertEquals( vector:getZ() , 300.0)
end

function TestMOAIBtVector3:testVectorNormilize()
	local vector = self.vector
	vector:normalize()
	assertEquals( vector:norm() , 1.0)
end

function TestMOAIBtVector3:testVectorNormilized()
	local vector = self.vector:normalized()
	assertNotIs( vector , nil)
	assertEquals(type(vector),"userdata")
	assertEquals(vector:getClassName(),"MOAIBtVector3")
	assertEquals( vector:norm() , 1.0)
end