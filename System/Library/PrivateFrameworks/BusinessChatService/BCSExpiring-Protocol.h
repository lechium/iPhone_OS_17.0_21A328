//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BusinessChatService/NSObject-Protocol.h>

@class NSDate;

@protocol BCSExpiring <NSObject>
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(readonly, copy, nonatomic) NSDate *expirationDate;
@end
