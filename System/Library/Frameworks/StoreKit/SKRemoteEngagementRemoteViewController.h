//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@protocol SKEngagementPresenterProtocol;

__attribute__((visibility("hidden")))
@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController
{
    id <SKEngagementPresenterProtocol> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x0060000000019973
+ (id)serviceViewControllerInterface;	// IMP=0x0060000000019953
- (void).cxx_destruct;	// IMP=0x0000000000019bd4
@property(nonatomic) __weak id <SKEngagementPresenterProtocol> delegate; // @synthesize delegate=_delegate;
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;	// IMP=0x0000000000019ac9
- (void)engagementTaskDidFinishWithResult:(id)arg1 resultData:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019993

@end

