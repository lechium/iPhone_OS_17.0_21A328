//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableData, NSString, NSURLConnection;
@protocol SiteIconDownloadRequestDelegate;

@interface SiteIconDownloadRequest : NSObject
{
    _Bool _fetchForFavoritesIcon;	// 8 = 0x8
    _Bool _paused;	// 9 = 0x9
    NSURLConnection *_URLConnection;	// 16 = 0x10
    NSMutableData *_iconData;	// 24 = 0x18
    int _bookmarkID;	// 32 = 0x20
    NSString *_bookmarkUUID;	// 40 = 0x28
    NSString *_bookmarkAddress;	// 48 = 0x30
    id <SiteIconDownloadRequestDelegate> _delegate;	// 56 = 0x38
    NSMutableArray *_iconURLs;	// 64 = 0x40
    NSString *_userAgentString;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000002cae
@property(retain, nonatomic) NSString *userAgentString; // @synthesize userAgentString=_userAgentString;
@property(retain, nonatomic) NSMutableArray *iconURLs; // @synthesize iconURLs=_iconURLs;
@property(nonatomic) __weak id <SiteIconDownloadRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *bookmarkAddress; // @synthesize bookmarkAddress=_bookmarkAddress;
@property(readonly, nonatomic) int bookmarkID; // @synthesize bookmarkID=_bookmarkID;
@property(readonly, nonatomic) NSString *bookmarkUUID; // @synthesize bookmarkUUID=_bookmarkUUID;
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x0010000000002ab9
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000002aa7
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00100000000029de
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000028f7
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x00100000000027e6
- (void)_processIconDataAndNotifyDelegateWithIconURL:(id)arg1;	// IMP=0x001000000000216d
- (id)_bestImageWithData:(id)arg1 forWidth:(double)arg2;	// IMP=0x0010000000001ef4
- (void)_cancelConnectionAndFetchNextIcon;	// IMP=0x0010000000001ec2
- (void)fetchNextIcon;	// IMP=0x0010000000001d34
- (void)setBookmarkFetchedIconData;	// IMP=0x0010000000001c2e
- (void)start;	// IMP=0x0010000000001c18
- (void)cancel;	// IMP=0x0010000000001c02
- (id)initWithBookmark:(id)arg1 singleResourceURL:(id)arg2;	// IMP=0x0010000000001a50

@end

