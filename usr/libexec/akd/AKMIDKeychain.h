//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAFKeychainManager;

@interface AKMIDKeychain : NSObject
{
    AAFKeychainManager *_keychainManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000be8c2
- (_Bool)_clearLastKnownMID:(id *)arg1;	// IMP=0x00100000000be867
- (id)_lastKnownMIDDescriptor;	// IMP=0x00100000000be7bc
- (_Bool)updateLastKnownMID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000be644
- (id)lastKnownMID:(id *)arg1;	// IMP=0x00100000000be467
- (id)init;	// IMP=0x00100000000be411

@end

