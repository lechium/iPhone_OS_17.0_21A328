//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NARApplicationWorkspace;
@protocol CSLPRFNanoAppRegistryApplicationSourceDelegate;

__attribute__((visibility("hidden")))
@interface CSLPRFNanoAppRegistryApplicationSource : NSObject
{
    NARApplicationWorkspace *_workspace;	// 8 = 0x8
    id <CSLPRFNanoAppRegistryApplicationSourceDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000bcd8
@property(nonatomic) __weak id <CSLPRFNanoAppRegistryApplicationSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_appsDidChange;	// IMP=0x000000000000bc04
- (void)allApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b573
- (void)dealloc;	// IMP=0x000000000000b526
- (id)init;	// IMP=0x000000000000b491

@end

