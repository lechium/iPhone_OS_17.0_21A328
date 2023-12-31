//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHAttribution;

@interface SHMatchResultUserNotificationContentProvider : NSObject
{
    SHAttribution *_attribution;	// 8 = 0x8
}

+ (id)notificationCategories;	// IMP=0x0040000000011883
- (void).cxx_destruct;	// IMP=0x0020000000011b5e
@property(retain, nonatomic) SHAttribution *attribution; // @synthesize attribution=_attribution;
- (id)notificationContentForNoMatch;	// IMP=0x0010000000011943
- (void)notificationContentForMediaItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011500
- (id)initWithAttribution:(id)arg1;	// IMP=0x0010000000011495

@end

