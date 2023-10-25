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

+ (void)reset;	// IMP=0x002000000005763c
+ (id)sharedSettings;	// IMP=0x0010000000057570
- (void).cxx_destruct;	// IMP=0x0020000000057f29
@property(retain, nonatomic) NSMutableDictionary *cachedSettings; // @synthesize cachedSettings=_cachedSettings;
@property(retain, nonatomic) NSURL *settingsURL; // @synthesize settingsURL=_settingsURL;
- (void)_writeCachedSettings;	// IMP=0x0010000000057d8c
- (void)_readCachedSettings;	// IMP=0x0010000000057a0e
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000057930
- (void)removeValueForKey:(id)arg1;	// IMP=0x001000000005786f
- (id)valueForKey:(id)arg1;	// IMP=0x00100000000577a9
- (id)initWithURL:(id)arg1;	// IMP=0x0010000000057724

@end
