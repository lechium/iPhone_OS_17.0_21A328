//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DAKeychainAdditions)
+ (id)da_new64ByteGUID;	// IMP=0x0050000000019e13
+ (id)da_newGUID;	// IMP=0x0050000000019ddc
- (id)stringByURLQuoting;	// IMP=0x00100000000100a4
- (id)da_trimWhiteSpace;	// IMP=0x0010000000019d94
- (_Bool)da_hasPrefixCaseInsensitive:(id)arg1;	// IMP=0x0010000000019d6c
- (id)da_stringByURLEscapingPathComponent;	// IMP=0x0010000000019d16
- (id)da_appendSlashIfNeeded;	// IMP=0x0010000000019cbd
- (id)da_removeSlashIfNeeded;	// IMP=0x0010000000019c57
- (id)da_stringByRemovingPercentEscapesForUsername;	// IMP=0x0010000000019c31
- (id)da_stringByAddingPercentEscapesForUsername;	// IMP=0x0010000000019bfe
- (id)da_absoluteURLForChildLeastInfoRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x001000000001bf0e
@end

