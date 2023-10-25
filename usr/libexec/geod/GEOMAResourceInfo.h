//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GEOMAResourceInfo : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSDictionary *_queryParameters;	// 16 = 0x10
}

+ (id)baseURLForType:(unsigned long long)arg1;	// IMP=0x004000000002e71e
+ (id)maResourcesFolder;	// IMP=0x001000000002e6b4
- (void).cxx_destruct;	// IMP=0x002000000002fc92
- (id)description;	// IMP=0x001000000002f9cc
- (void)_listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f32d
- (void)listResources:(_Bool)arg1 queue:(id)arg2 results:(CDUnknownBlockType)arg3;	// IMP=0x001000000002f1fc
- (id)installedResources;	// IMP=0x001000000002ed17
- (id)query;	// IMP=0x001000000002eadf
- (id)_backgroundDownloadOptions;	// IMP=0x001000000002ea85
- (_Bool)isExpired;	// IMP=0x001000000002e99d
- (void)updateLastAccessedTime;	// IMP=0x001000000002e94e
- (double)lastAccessedTime;	// IMP=0x001000000002e7c6
- (id)baseURL;	// IMP=0x001000000002e79e
- (id)initWithType:(unsigned long long)arg1 overrides:(id)arg2;	// IMP=0x001000000002e4de

@end
