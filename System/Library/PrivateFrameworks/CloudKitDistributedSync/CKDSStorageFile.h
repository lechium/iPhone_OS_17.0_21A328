//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CKDSStorageFile : NSObject
{
    _Bool _isOwned;	// 8 = 0x8
    NSURL *_URL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d73b2
@property(readonly, nonatomic) _Bool isOwned; // @synthesize isOwned=_isOwned;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;	// IMP=0x00000000000d71ad
- (id)initWithURL:(id)arg1 isOwned:(_Bool)arg2;	// IMP=0x00000000000d70c9

@end
