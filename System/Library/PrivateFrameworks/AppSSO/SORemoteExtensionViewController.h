//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class NSString;
@protocol SORemoteExtensionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SORemoteExtensionViewController : _UIRemoteViewController
{
    id <SORemoteExtensionViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0010000000019f2a
+ (id)serviceViewControllerInterface;	// IMP=0x0010000000019f0a
- (void).cxx_destruct;	// IMP=0x000000000001a149
@property(nonatomic) __weak id <SORemoteExtensionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000019f4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

