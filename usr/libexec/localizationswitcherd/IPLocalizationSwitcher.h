//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPLocalizationSwitcherServiceDelegate;

@interface IPLocalizationSwitcher : NSObject
{
    IPLocalizationSwitcherServiceDelegate *_delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002cde
@property(retain, nonatomic) IPLocalizationSwitcherServiceDelegate *delegate; // @synthesize delegate=_delegate;
- (void)preferredLanguagesForBundleIDs:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002a5b
- (void)preferredLanguagesForBundleID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000029e8
- (void)notifyPreferredLanguageChangedForBundleID:(id)arg1;	// IMP=0x001000000000297f
- (void)setPreferredLanguage:(id)arg1 forBundleID:(id)arg2 andRelaunchWithReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002888

@end

