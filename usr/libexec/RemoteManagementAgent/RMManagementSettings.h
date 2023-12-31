//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface RMManagementSettings : NSObject
{
    NSObject *_settingsLock;	// 8 = 0x8
    NSURL *_settingsURL;	// 16 = 0x10
    NSMutableDictionary *_cachedSettings;	// 24 = 0x18
}

+ (void)reset;	// IMP=0x00200000000575fc
+ (id)sharedSettings;	// IMP=0x0010000000057530
- (void).cxx_destruct;	// IMP=0x0020000000057ee9
@property(retain, nonatomic) NSMutableDictionary *cachedSettings; // @synthesize cachedSettings=_cachedSettings;
@property(retain, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
- (void)_writeCachedSettings;	// IMP=0x0010000000057d4c
- (void)_readCachedSettings;	// IMP=0x00100000000579ce
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000578f0
- (void)removeValueForKey:(id)arg1;	// IMP=0x001000000005782f
- (id)valueForKey:(id)arg1;	// IMP=0x0010000000057769
- (id)initWithURL:(id)arg1;	// IMP=0x00100000000576e4

@end

