//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface CRAlert : NSObject
{
    struct __CFUserNotification *_alert;	// 8 = 0x8
    _Bool _alertAutoDismissed;	// 16 = 0x10
    NSTimer *_alertDismissTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000003e4c
@property(nonatomic) _Bool alertAutoDismissed; // @synthesize alertAutoDismissed=_alertAutoDismissed;
@property(retain, nonatomic) NSTimer *alertDismissTimer; // @synthesize alertDismissTimer=_alertDismissTimer;
- (_Bool)dismissAlert;	// IMP=0x0010000000003e02
- (_Bool)presentAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000039a1
- (id)_alertContents;	// IMP=0x001000000000366b
- (_Bool)_isDeviceUnlocked;	// IMP=0x0010000000003663
- (id)iconImagePath;	// IMP=0x00100000000035e7
- (id)alertOtherButtonTitle;	// IMP=0x00100000000035df
- (id)alertDeclineButtonTitle;	// IMP=0x00100000000035d7
- (id)alertAcceptButtonTitle;	// IMP=0x00100000000035cf
- (id)alertMessage;	// IMP=0x00100000000035c7
- (id)alertTitle;	// IMP=0x00100000000035bf
- (id)lockscreenMessage;	// IMP=0x00100000000035b7
- (id)lockscreenTitle;	// IMP=0x00100000000035a6
- (_Bool)requiresUnlockedDevice;	// IMP=0x001000000000359e
- (double)alertDismissal;	// IMP=0x0010000000003595
- (_Bool)allowInCar;	// IMP=0x001000000000358d
- (void)_setAlert:(struct __CFUserNotification *)arg1;	// IMP=0x001000000000355c

@end

