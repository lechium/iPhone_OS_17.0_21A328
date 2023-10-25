//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDImportSafariCardRequestUserNotification
{
    NSString *_networkName;	// 152 = 0x98
    NSString *_fpanSuffix;	// 160 = 0xa0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000028e112
+ (id)notificationIdentifierForFPANSuffix:(id)arg1 networkName:(id)arg2;	// IMP=0x001000000028de1a
+ (id)notificationIdentifierForPaymentSafariCredential:(id)arg1;	// IMP=0x001000000028dd56
- (void).cxx_destruct;	// IMP=0x002000000028e2a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028e209
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028e11a
- (id)_messageString;	// IMP=0x001000000028e0e2
- (id)_subtitleString;	// IMP=0x001000000028e0d1
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000028e014
- (unsigned long long)notificationType;	// IMP=0x001000000028e009
- (id)initWithFPANSuffix:(id)arg1 networkName:(id)arg2;	// IMP=0x001000000028def7
- (id)initWithPaymentSafariCredential:(id)arg1;	// IMP=0x001000000028de3f

@end
