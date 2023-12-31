//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PDASMSyncOperation
{
    NSMutableArray *_zoneNames;	// 32 = 0x20
    NSMutableArray *_initialSyncZoneNames;	// 40 = 0x28
    _Bool _firstRun;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000159469
- (void)abortWithError:(id)arg1;	// IMP=0x00100000001593ad
- (void)rescheduleOperation;	// IMP=0x001000000015934d
- (_Bool)processResponseZone:(id)arg1;	// IMP=0x0010000000158d1b
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000158877
- (id)requestData;	// IMP=0x00100000001580cc
- (_Bool)wantsToExecute;	// IMP=0x0010000000157f0f
- (void)execute;	// IMP=0x0010000000157eb2
- (void)prepare;	// IMP=0x0010000000157b0f
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000157ad0
- (Class)expectedResponseClass;	// IMP=0x0010000000157abf
- (id)acceptContentType;	// IMP=0x0010000000157ab2
- (id)requestContentType;	// IMP=0x0010000000157aa5
- (id)endpointIdentifier;	// IMP=0x0010000000157a98
- (id)logSubsystem;	// IMP=0x0010000000157a84

@end

