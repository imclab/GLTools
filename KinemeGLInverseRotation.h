

@interface KinemeGLInverseRotation : QCPatch
{
	QCNumberPort *outputXRotation;
	QCNumberPort *outputYRotation;
	QCNumberPort *outputZRotation;
}

- (id)initWithIdentifier:(id)fp8;

- (BOOL)execute:(QCOpenGLContext *)context time:(double)time arguments:(NSDictionary *)arguments;
@end