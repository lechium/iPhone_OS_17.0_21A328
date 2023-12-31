//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISStoreURLOperation.h>

@class SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransactionURLOperation : ISStoreURLOperation
{
    _Bool _shouldAuthenticate;	// 177 = 0xb1
    SBKRequest *_SBKRequest;	// 184 = 0xb8
}

+ (id)operationWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x006000000000d45f
- (void).cxx_destruct;	// IMP=0x000000000000d44c
@property(retain, nonatomic) SBKRequest *SBKRequest; // @synthesize SBKRequest=_SBKRequest;
- (id)description;	// IMP=0x000000000000d378
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
- (id)_init;	// IMP=0x000000000000d1ab
- (id)init;	// IMP=0x000000000000d124

@end

