//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDUploadEventsOperation
{
}

+ (id)serviceID;	// IMP=0x00400000000f2358
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000f2a19
- (id)requestData;	// IMP=0x00100000000f2456
- (void)prepare;	// IMP=0x00100000000f2427
- (_Bool)wantsToExecute;	// IMP=0x00100000000f23b1
- (Class)expectedResponseClass;	// IMP=0x00100000000f23a0
- (id)acceptContentType;	// IMP=0x00100000000f2393
- (id)requestContentType;	// IMP=0x00100000000f2386
- (id)endpointIdentifier;	// IMP=0x00100000000f2379
- (id)logSubsystem;	// IMP=0x00100000000f2365

@end

