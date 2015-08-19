//
//  IconCloud.h
//  IconTestApp
//
//  Created by Alexey Chechetkin on 18.08.15.
//  Copyright (c) 2015 Alexey Chechetkin. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(int, IconCloudType)
{
    IconCloudTypeUpload,
    IconCloudTypeDownload,
    IconCloudTypeCheck,
    IconCloudTypeStop,
    IconCloudTypeError,
    IconCloudTypeNone
};

@interface IconCloud : UIView

@property(nonatomic) IconCloudType  iconType;

@property(nonatomic,readonly) BOOL  isCheckAnimationInProgress;
@property(nonatomic,readonly) BOOL  isUploadAnimationInProgress;
@property(nonatomic,readonly) BOOL  isDownloadAnimationInProgress;

- (void)playCheckAnimation;
- (void)stopCheckAnimation;

- (void)playUploadAnimation;
- (void)stopUploadAnimation;

- (void)playDownloadAnimation;
- (void)stopDownloadAnimation;

@end
