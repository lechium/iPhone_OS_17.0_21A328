//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface KeybagSyncOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000019163b
- (id)_newRequestPropertiesWithBodyData:(id)arg1;	// IMP=0x0010000000191512
- (id)_newBodyDataWithBodyPlist:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000191474
- (void)run;	// IMP=0x001000000019140b
- (id)initWithKeybagSyncRequest:(id)arg1;	// IMP=0x0010000000191389

@end

