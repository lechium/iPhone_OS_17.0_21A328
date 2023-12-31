//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDSuggestVPANForProvisionedSafariCardRequestUserNotification
{
    NSString *_networkName;	// 152 = 0x98
    NSString *_fpanSuffix;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000028e7ea
+ (id)notificationIdentifierForPassUniqueIdentifier:(id)arg1;	// IMP=0x001000000028e5cd
- (void).cxx_destruct;	// IMP=0x002000000028e980
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028e8e1
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028e7f2
- (id)_messageString;	// IMP=0x001000000028e7ba
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000028e737
- (unsigned long long)notificationType;	// IMP=0x001000000028e72c
- (id)initWithFPANSuffix:(id)arg1 networkName:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x001000000028e5f2

@end

