//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSSet;

@interface ErrorHandlerClient
{
    NSSet *_failureTypes;	// 48 = 0x30
    NSMutableDictionary *_sessions;	// 56 = 0x38
}

@property(copy) NSSet *failureTypes;
- (id)popSessionWithIdentifier:(long long)arg1;	// IMP=0x00100000001b1d4b
- (id)popAllSessions;	// IMP=0x00100000001b1c21
- (void)addSession:(id)arg1;	// IMP=0x00100000001b1a0e
- (void)dealloc;	// IMP=0x00100000001b19b6

@end
