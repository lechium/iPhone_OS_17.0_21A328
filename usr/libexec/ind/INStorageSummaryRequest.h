//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface INStorageSummaryRequest : AARequest
{
    ACAccount *_account;	// 8 = 0x8
}

+ (Class)responseClass;	// IMP=0x0040000000015605
- (void).cxx_destruct;	// IMP=0x0020000000015a1e
- (id)urlRequest;	// IMP=0x0010000000015810
- (id)urlString;	// IMP=0x00100000000156af
- (id)init;	// IMP=0x0010000000015684
- (id)initWithAccount:(id)arg1;	// IMP=0x0010000000015616

@end

