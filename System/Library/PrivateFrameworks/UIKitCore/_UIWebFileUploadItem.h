//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIWebFileUploadItem : NSObject
{
    NSString *_filePath;	// 8 = 0x8
}

@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (_Bool)isVideo;	// IMP=0x00000000008725fb
- (id)displayImage;	// IMP=0x00000000008725f3
- (void)dealloc;	// IMP=0x00000000008725b3
- (id)initWithFilePath:(id)arg1;	// IMP=0x000000000087255d

@end

