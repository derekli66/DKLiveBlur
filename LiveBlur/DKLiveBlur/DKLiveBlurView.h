//
//  DKLiveBlurView.h
//  LiveBlur
//
//  Created by Dmitry Klimkin on 16/6/13.
//  Copyright (c) 2013 Dmitry Klimkin. All rights reserved.
//
//  Forked by Chien Ming Lee on 25/7/14
//  Make blurLevel get effective while originalImage is set.
//

#import <UIKit/UIKit.h>

#define kDKBlurredBackgroundDefaultLevel 0.9f
#define kDKBlurredBackgroundDefaultGlassLevel 0.2f
#define kDKBlurredBackgroundDefaultGlassColor [UIColor whiteColor]

@interface DKLiveBlurView : UIImageView
/** initialBlurRadius applies on originalImage to get the blurred image
 */
@property (nonatomic, assign) float initialBlurRadius;

/** initialGlassRadius controls the initial value of glass effect.
 */
@property (nonatomic, assign) float initialGlassRadius;

/** Turns on or off glass effect
 */
@property (nonatomic, assign) BOOL isGlassEffectOn;

/** The glass color for glass effect
 */
@property (nonatomic, strong) UIColor *glassColor;

/** Control the blur effect which is currently displaying
 */
@property (nonatomic, assign) CGFloat blurLevel;

/** The image will get blurred.
 */
@property (nonatomic, strong) UIImage *originalImage;

/** Connect to UIScrollView or its subclass, like UITableView to make blurLevel interacted with vertical content offset
 */
@property (nonatomic, weak) UIScrollView *scrollView;

@end
