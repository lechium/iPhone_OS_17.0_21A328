//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class C2Session, NSString;

__attribute__((visibility("hidden")))
@interface C2SessionTLSCache : NSObject
{
    C2Session *_pinnedSession;	// 8 = 0x8
    C2Session *_unpinnedSession;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001fd93
@property(retain, nonatomic) C2Session *unpinnedSession; // @synthesize unpinnedSession=_unpinnedSession;
@property(retain, nonatomic) C2Session *pinnedSession; // @synthesize pinnedSession=_pinnedSession;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;	// IMP=0x000000000001fce3
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000001fb7e
- (id)underlyingDelegateQueue;	// IMP=0x000000000001fb76
- (id)sessionForOptions:(id)arg1;	// IMP=0x000000000001fa63
- (id)_createSessionWithTLSPinning:(_Bool)arg1;	// IMP=0x000000000001f9b1
- (id)init;	// IMP=0x000000000001f94d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

