//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAIntentGroupConfirmIntent.h>

@interface SAIntentGroupConfirmIntent (INSExtensionService)
- (_Bool)ins_shouldUseExtendedFlowTimeout;	// IMP=0x0090000000005563
- (long long)ins_analyticsEndEventType;	// IMP=0x0090000000005558
- (long long)ins_analyticsBeginEventType;	// IMP=0x009000000000554d
- (void)ins_sendIntent:(id)arg1 toExtensionProxy:(id)arg2 onQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0090000000005309
- (void)ins_setJSONEncodedIntent:(id)arg1;	// IMP=0x00900000000052f7
- (void)ins_setProtobufEncodedIntent:(id)arg1;	// IMP=0x00900000000052e5
- (id)ins_protobufEncodedIntent;	// IMP=0x00900000000052d3
- (id)ins_jsonEncodedIntent;	// IMP=0x00900000000052c1
@end
