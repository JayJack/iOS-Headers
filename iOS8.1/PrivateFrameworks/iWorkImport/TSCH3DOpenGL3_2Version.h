//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DGLVersion.h>

__attribute__((visibility("hidden")))
@interface TSCH3DOpenGL3_2Version : TSCH3DGLVersion
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)version;
+ (id)_singletonAlloc;
- (id)additionalConclusionsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)additionalGlobalsForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexVaryingQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (id)vertexAttributeQualifierForShaderType:(struct TSCH3DShaderType)arg1;
- (void)addCompatibilityFunctionsForShaderProgram:(id)arg1;
- (id)preprocessorDefinitions;
- (BOOL)deprecatesLuminanceAlpha;
- (BOOL)supportsClipDistances;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

