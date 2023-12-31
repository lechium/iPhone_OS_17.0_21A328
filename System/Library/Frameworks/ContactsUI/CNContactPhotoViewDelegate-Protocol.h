//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class CNContactPhotoView, CNContactViewCache, NSData, UIViewController;

@protocol CNContactPhotoViewDelegate <NSObject>
- (CNContactViewCache *)contactViewCache;
- (void)photoView:(CNContactPhotoView *)arg1 didAcceptDropOfImageData:(NSData *)arg2;
- (UIViewController *)viewControllerForPhotoView:(CNContactPhotoView *)arg1;
- (void)photoViewDidUpdate:(CNContactPhotoView *)arg1;

@optional
- (void)didTapPhotoView;
@end

