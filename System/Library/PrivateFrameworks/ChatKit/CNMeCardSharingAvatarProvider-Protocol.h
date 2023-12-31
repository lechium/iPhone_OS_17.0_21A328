//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class UIWindowScene;

@protocol CNMeCardSharingAvatarProvider <NSObject>
- (void)generateAvatarImageOfSize:(struct CGSize)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;

@optional
- (void)generatePosterAnimationControllerWithWindowScene:(UIWindowScene *)arg1 imageHandler:(void (^)(UIViewController *, NSError *))arg2;
- (void)generatePosterImageWithWindowScene:(UIWindowScene *)arg1 imageHandler:(void (^)(UIImage *, NSError *))arg2;
@end

