var bosch = new Object();

bosch.hello = function (success, failure, data)
{	
	alert(data);
	qTobject.sigSuccess.connect(success);
	qTobject.sigFailure.connect(failure);
	var returnVal = qTobject.hello(data);
	qTobject.sigSuccess.disconnect(success);
	qTobject.sigFailure.disconnect(failure);
	alert(data);
	return returnVal;

	
}
