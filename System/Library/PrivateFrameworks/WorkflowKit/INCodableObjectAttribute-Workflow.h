//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCodableObjectAttribute.h>

@interface INCodableObjectAttribute (Workflow)
- (id)mediaTypeFromIntentMediaType:(long long)arg1;	// IMP=0x0090000000160800
- (id)wf_processedParameterValueForValue:(id)arg1;	// IMP=0x009000000016075a
- (id)wf_contentItemForValue:(id)arg1;	// IMP=0x009000000016067f
- (id)wf_parameterStateForIntentValue:(id)arg1 parameterDefinition:(id)arg2;	// IMP=0x0090000000160111
- (void)wf_getProcessedIntentValueForParameterValue:(id)arg1 parameter:(id)arg2 parameterState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x009000000015fe52
- (void)wf_updateParameterDictionary:(id)arg1 parameterClass:(Class)arg2 localizer:(id)arg3;	// IMP=0x009000000015fd84
- (Class)wf_parameterClass;	// IMP=0x009000000015fd34
- (Class)wf_objectClass;	// IMP=0x009000000015fcc7
- (Class)wf_facadeClass;	// IMP=0x009000000015fc6f
@end
