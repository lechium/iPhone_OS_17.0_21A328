//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PCCKey : NSObject
{
    struct pcc_invocation_key *_secret;	// 8 = 0x8
}

@property struct pcc_invocation_key *secret; // @synthesize secret=_secret;
- (void)dealloc;	// IMP=0x0000000000393286
- (void)clear;	// IMP=0x0000000000393273
- (id)decrypt:(id)arg1;	// IMP=0x000000000039318b
- (id)encrypt:(id)arg1;	// IMP=0x00000000003930b2
- (id)init;	// IMP=0x000000000039306d

@end
