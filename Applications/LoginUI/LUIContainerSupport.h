//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LKClassConfiguration, NSURL;

@interface LUIContainerSupport : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x0040000000038c63
@property(readonly) NSURL *classRosterInformationFileURL;
- (id)containerLibraryDirectoryURL;	// IMP=0x0010000000038d65
@property(readonly) LKClassConfiguration *cachedClassConfiguration;

@end
