//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDVirtualCardVPANImplicitUpgradeUserNotification
{
    NSString *_cardName;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000028e49a
+ (id)notificationIdentifierForPassUniqueIdentifier:(id)arg1;	// IMP=0x001000000028e2d9
- (void).cxx_destruct;	// IMP=0x002000000028e5ba
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028e53d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028e4a2
- (id)_messageString;	// IMP=0x001000000028e475
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000028e3f2
- (unsigned long long)notificationType;	// IMP=0x001000000028e3e7
- (id)initWithCardName:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x001000000028e2fe

@end

