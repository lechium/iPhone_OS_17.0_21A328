//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class KCSharingInternetPasswordCredential, KCSharingPrivateKeyCredential;

@protocol KCSharingItem <NSObject, NSCopying>
@property(readonly, nonatomic) KCSharingInternetPasswordCredential *internetPassword;
@property(readonly, nonatomic) KCSharingPrivateKeyCredential *privateKey;
@property(readonly, nonatomic) long long type;
@end

