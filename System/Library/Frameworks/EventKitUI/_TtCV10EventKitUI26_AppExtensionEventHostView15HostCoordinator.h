//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV10EventKitUI26_AppExtensionEventHostView15HostCoordinator : NSObject
{
    MISSING_TYPE *parent;	// 8 = 0x8
    MISSING_TYPE *identity;	// 0 = 0x0
    MISSING_TYPE *conn;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *configurationChangedPublisherSink;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001efba0
- (id)init;	// IMP=0x00000000001efb40
- (void)didCompleteWithAction:(long long)arg1;	// IMP=0x00000000001efb00
- (void)requestDismissViewWithName:(id)arg1 presentationStyle:(long long)arg2;	// IMP=0x00000000001ef890
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3 sourceRect:(id)arg4 preferredContentSize:(id)arg5 oopContentBackgroundColor:(id)arg6;	// IMP=0x00000000001ef570
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;	// IMP=0x00000000001ef220
- (void)hostViewControllerDidActivate:(id)arg1;	// IMP=0x00000000001ef180

@end

