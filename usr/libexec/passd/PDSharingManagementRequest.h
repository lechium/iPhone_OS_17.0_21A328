//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PDSharingManagementRequest : PKPaymentWebServiceRequest
{
    NSString *_regionIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000495f3e
@property(retain, nonatomic) NSString *regionIdentifier; // @synthesize regionIdentifier=_regionIdentifier;
- (id)urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x0010000000495f11

@end

