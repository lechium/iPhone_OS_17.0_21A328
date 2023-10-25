//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKFamilyMember;

@interface PDPeerPaymentGraduationUserNotification
{
    PKFamilyMember *_familyMember;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000027fb47
- (void).cxx_destruct;	// IMP=0x002000000027fde7
- (unsigned long long)familyNotificationType;	// IMP=0x001000000027fdd0
- (unsigned long long)notificationType;	// IMP=0x001000000027fdc5
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000027fcda
- (id)_messageString;	// IMP=0x001000000027fc78
- (id)_titleString;	// IMP=0x001000000027fc67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000027fbea
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000027fb4f
- (id)initWithPassUniqueIdentifier:(id)arg1 familyMember:(id)arg2;	// IMP=0x001000000027fa5c

@end
